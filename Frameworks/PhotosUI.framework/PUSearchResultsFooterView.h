/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsFooterView : UIView {
    <PUSearchResultsFooterViewDelegate> * _delegate;
    UILabel * _descriptionLabel;
    NSLayoutConstraint * _fileRadarToIndexViewConstraint;
    NSLayoutConstraint * _fileRadarToNoResultsConstraint;
    NSLayoutConstraint * _fileRadarToSelfConstraint;
    PUSearchResultsIndexingProgressView * _indexingProgressView;
    NSLayoutConstraint * _indexingViewToNoResultsConstraint;
    NSLayoutConstraint * _indexingViewToSelfConstraint;
    UILabel * _noResultsLabel;
    UIButton * _tapToRadarButton;
}

@property (nonatomic) <PUSearchResultsFooterViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSLayoutConstraint *fileRadarToIndexViewConstraint;
@property (nonatomic, retain) NSLayoutConstraint *fileRadarToNoResultsConstraint;
@property (nonatomic, retain) NSLayoutConstraint *fileRadarToSelfConstraint;
@property (nonatomic, retain) PUSearchResultsIndexingProgressView *indexingProgressView;
@property (getter=isIndexingViewHidden, nonatomic) bool indexingViewHidden;
@property (nonatomic, retain) NSLayoutConstraint *indexingViewToNoResultsConstraint;
@property (nonatomic, retain) NSLayoutConstraint *indexingViewToSelfConstraint;
@property (nonatomic, retain) UILabel *noResultsLabel;
@property (nonatomic, retain) UIButton *tapToRadarButton;

+ (id)_preferredBoldLabelFont;
+ (id)_preferredCalloutFont;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_didSelectTapToRadarButton:(id)arg1;
- (id)delegate;
- (id)descriptionLabel;
- (id)fileRadarToIndexViewConstraint;
- (id)fileRadarToNoResultsConstraint;
- (id)fileRadarToSelfConstraint;
- (void)hideNoResultsContent;
- (id)indexingProgressView;
- (id)indexingViewToNoResultsConstraint;
- (id)indexingViewToSelfConstraint;
- (id)init;
- (bool)isIndexingViewHidden;
- (bool)isNoResultsContentHidden;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)noResultsLabel;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setFileRadarToIndexViewConstraint:(id)arg1;
- (void)setFileRadarToNoResultsConstraint:(id)arg1;
- (void)setFileRadarToSelfConstraint:(id)arg1;
- (void)setIndexingProgressView:(id)arg1;
- (void)setIndexingViewHidden:(bool)arg1;
- (void)setIndexingViewToNoResultsConstraint:(id)arg1;
- (void)setIndexingViewToSelfConstraint:(id)arg1;
- (void)setNoResultsLabel:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (void)showNoResultsContentForString:(id)arg1 suggestionsVisible:(bool)arg2;
- (id)tapToRadarButton;

@end
