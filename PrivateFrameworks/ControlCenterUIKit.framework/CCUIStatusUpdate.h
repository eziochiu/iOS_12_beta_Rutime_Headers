/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIStatusUpdate : NSObject {
    NSString * _message;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) unsigned long long type;

+ (id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2;
- (id)message;
- (unsigned long long)type;

@end
