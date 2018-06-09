/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBKeyInterval : NSObject {
    double  _interval;
    UIKBTree * _key;
}

@property (nonatomic) double interval;
@property (nonatomic, retain) UIKBTree *key;

- (void)dealloc;
- (id)initWithKey:(id)arg1 interval:(double)arg2;
- (double)interval;
- (id)key;
- (void)setInterval:(double)arg1;
- (void)setKey:(id)arg1;

@end
