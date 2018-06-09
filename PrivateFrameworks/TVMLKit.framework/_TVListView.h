/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListView : _TVCollectionView {
    bool  _configureForStackTemplate;
}

@property (nonatomic) bool configureForStackTemplate;

- (bool)configureForStackTemplate;
- (void)setConfigureForStackTemplate:(bool)arg1;
- (struct CGSize { double x1; double x2; })tv_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
