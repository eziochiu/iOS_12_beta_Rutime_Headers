/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyframe : NSObject {
    double  _duration;
    NSString * _key;
    double  _startTime;
    id  _value;
}

@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 startTime:(double)arg2 duration:(double)arg3;
- (void)setValue:(id)arg1;
- (id)value;

@end
