/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMEventDispatcher : NSObject

+ (id)sharedInstance;

- (bool)_runPhase:(long long)arg1 event:(id)arg2 nodeEn:(id)arg3;
- (bool)dispatchEvent:(id)arg1;

@end
