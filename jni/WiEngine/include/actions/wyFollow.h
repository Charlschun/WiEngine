/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __wyFollow_h__
#define __wyFollow_h__

#include "WiEngine-Classes.h"
#include "wyAction.h"
#include "wyTypes.h"

/**
 * An action that "follows" a node
 */
class WIENGINE_API wyFollow : public wyAction {

private:
	/// \link wyNode wyNode\endlink to be tracked
	wyNode* m_followedNode;

	/// true means max tracking area is set
	bool m_boundarySet;

	/// true means screen bound fully contains tracking area
	bool m_boundaryFullyCovered;

	/// half screen size
	wyPoint m_halfScreenSize;

	/// screen size
	wyPoint m_fullScreenSize;

	/// track area left boundary
	float m_leftBoundary;

	/// track area right boundary
	float m_rightBoundary;

	/// track area top boundary
	float m_topBoundary;

	/// track area bottom boundary
	float m_bottomBoundary;
    
    // smoothing history
    wyPoint p;
    
    // smoothing factor
    float smoothing;
    

protected:
	/**
	 * Constructor
	 *
	 * @param fNode node to follow
	 * @param worldBoundary rectangle of world, if not set, \c fNode will always be center
	 * 		in screen
     * @param smoothing fraction of old value to use in [0.0f, 1.0f]
	 */
	wyFollow(wyNode* fNode, wyRect worldBoundary, float smoothing);

public:
	/**
	 * Static Constructor
	 *
	 * @param fNode node to follow
	 * @param worldBoundary rectangle of world, if not set, \c fNode will always be center
	 * 		in screen
	 * @return \link wyFollow wyFollow\endlink
	 */
	static wyFollow* make(wyNode* fNode, wyRect worldBoundary = wyrZero, float smoothing = 0.0f);
    
	static wyFollow* make(wyNode* fNode, float smoothing = 0.0f);

	virtual ~wyFollow();

	/// @see wyAction::step
	virtual void step(float t);

	/// @see wyAction::isDone
	virtual bool isDone();
};

#endif // __wyFollow_h__
