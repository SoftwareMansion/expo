/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <ReactABI14_0_0/ABI14_0_0RCTRootView.h>

@class ABI14_0_0RCTTVRemoteHandler;

/**
 * The interface provides a set of functions that allow other internal framework
 * classes to change the ABI14_0_0RCTRootViews's internal state.
 */
@interface ABI14_0_0RCTRootView ()

/**
 * This setter should be used only by ABI14_0_0RCTUIManager on ReactABI14_0_0 root view size update.
 */
@property (readwrite, nonatomic, assign) CGSize intrinsicSize;

/**
 * TV remote gesture recognizers
 */
#if TARGET_OS_TV
@property (nonatomic, strong) ABI14_0_0RCTTVRemoteHandler *tvRemoteHandler;
@property (nonatomic, strong) UIView *ReactABI14_0_0PreferredFocusedView;
#endif

@end
