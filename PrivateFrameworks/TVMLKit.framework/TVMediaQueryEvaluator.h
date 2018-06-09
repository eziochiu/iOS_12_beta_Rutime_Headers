/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVMediaQueryEvaluator : NSObject {
    <TVMediaQueryEvaluatorDelegate> * _delegate;
    struct { 
        unsigned int respondsToEvaluate : 1; 
    }  _implFlags;
    IKViewElement * _templateElement;
    <UITraitEnvironment> * _traitEnvironment;
    _TVWindowSizeAdaptor * _windowSizeAdaptor;
}

@property (nonatomic) <TVMediaQueryEvaluatorDelegate> *delegate;
@property (nonatomic, readonly, retain) IKViewElement *templateElement;
@property (nonatomic, readonly, retain) <UITraitEnvironment> *traitEnvironment;
@property (nonatomic, readonly, retain) _TVWindowSizeAdaptor *windowSizeAdaptor;

+ (id)_mobileGestaltStringForKey:(struct __CFString { }*)arg1;
+ (id)_productType;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;

- (void).cxx_destruct;
- (bool)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2;
- (bool)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2;
- (bool)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2;
- (id)delegate;
- (bool)evaluateMediaQuery:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)templateElement;
- (id)traitEnvironment;
- (id)windowSizeAdaptor;

@end
