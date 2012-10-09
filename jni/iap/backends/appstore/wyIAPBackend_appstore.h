/*
 * Copyright (c) 2010 WiYun Inc.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#if IOS || MACOSX

#ifndef __wyIAPBackend_appstore_h__
#define __wyIAPBackend_appstore_h__

#include "wyIAPBackend.h"
#include "wyGlobal.h"
#import <StoreKit/StoreKit.h>
#import "wyIAPPaymentObserver.h"
#import "wyIAPVerifyDelegate.h"

/**
 * @class wyIAPBackend_appstore
 *
 * Implemention of IOS IAP
 */
class wyIAPBackend_appstore : public wyIAPBackend {
private:
	/// product requests
	NSMutableArray* m_requests;
    
    /// verify delegates
    NSMutableArray* m_verifyDelegates;
	
	/// payment observer
	wyIAPPaymentObserver* m_observer;
	
protected:
	wyIAPBackend_appstore();

public:
	virtual ~wyIAPBackend_appstore();
	static wyIAPBackend_appstore* make();

	/// @see wyIAPBackend::isAvailable
	virtual bool isAvailable();

	/// @see wyIAPBackend::buy
	virtual void buy(const char* productId, int quantity = 1);
    
    /// @see wyIAPBackend::restoreTransactions
    virtual void restoreTransactions();
	
    /// @see wyIAPBackend::verifyTransaction
    virtual void verifyTransaction(const char* pid, const void* receipt, size_t length, bool sandbox = false);
    
    /// @see wyIAPBackend::config
    virtual void config(const char* key, const char* value);
    
	/// remove this request from cached list
	void removeRequest(SKProductsRequest* req);
    
    /// remove verify delegate
    void removeVerifyDelegate(wyIAPVerifyDelegate* d);
};

#endif // __wyIAPBackend_appstore_h__

#endif // #if IOS || MACOSX