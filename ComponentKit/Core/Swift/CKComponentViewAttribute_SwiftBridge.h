/*
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^CKComponentViewAttribute_SwiftBridgeGestureHandler)(UIGestureRecognizer *);

__attribute__((objc_subclassing_restricted))
NS_SWIFT_NAME(ComponentViewAttributeSwiftBridge)
@interface CKComponentViewAttribute_SwiftBridge : NSObject

- (instancetype)initWithIdentifier:(NSString *)identifier applicator:(void(^)(UIView *))applicator;

- (instancetype)init NS_UNAVAILABLE;

/* Gestures */
- (instancetype)initWithTapHandler:(CKComponentViewAttribute_SwiftBridgeGestureHandler)handler;
- (instancetype)initWithPanHandler:(CKComponentViewAttribute_SwiftBridgeGestureHandler)handler;
- (instancetype)initWithLongPressHandler:(CKComponentViewAttribute_SwiftBridgeGestureHandler)handler;

@end

NS_ASSUME_NONNULL_END
