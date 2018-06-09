/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsIndexingProgressView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _indexingLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *indexingLabel;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)contentSizeCategoryChanged;
- (id)indexingLabel;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setActivityIndicator:(id)arg1;
- (void)setIndexingLabel:(id)arg1;

@end
