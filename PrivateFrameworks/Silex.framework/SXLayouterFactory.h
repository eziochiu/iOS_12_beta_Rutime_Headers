/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayouterFactory : NSObject {
    <SXLayouterDelegate> * _layouterDelegate;
}

@property (nonatomic, readonly) <SXLayouterDelegate> *layouterDelegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (id)layouterDelegate;
- (id)layouterForContainerComponentBlueprint:(id)arg1;

@end
