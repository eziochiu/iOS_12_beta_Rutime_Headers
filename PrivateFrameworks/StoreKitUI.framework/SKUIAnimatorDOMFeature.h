/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature> {
    IKAppContext * _appContext;
    <SKUIAnimatorDOMFeatureDelegate> * _delegate;
    NSString * _featureName;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIAnimatorDOMFeatureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
