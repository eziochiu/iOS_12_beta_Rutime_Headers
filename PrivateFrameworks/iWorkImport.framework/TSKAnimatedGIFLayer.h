/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFLayer : CALayer {
    TSKAnimatedGIFController * mController;
}

@property (nonatomic) TSKAnimatedGIFController *controller;

+ (id)defaultActionForKey:(id)arg1;

- (id)controller;
- (void)dealloc;
- (void)display;
- (void)setController:(id)arg1;
- (void)teardown;

@end
