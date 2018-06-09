/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKSplitTemplate : IKViewElement {
    NSString * _displayMode;
    IKDOMFeatureNavigationDocument * _leftNavigationDocument;
    IKDOMFeatureNavigationDocument * _rightNavigationDocument;
}

@property (nonatomic, copy) NSString *displayMode;
@property (nonatomic, readonly) IKDOMFeatureNavigationDocument *leftNavigationDocument;
@property (nonatomic, readonly) IKDOMFeatureNavigationDocument *rightNavigationDocument;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_featureWithName:(id)arg1;
- (id)displayMode;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftNavigationDocument;
- (id)rightNavigationDocument;
- (void)setDisplayMode:(id)arg1;

@end
