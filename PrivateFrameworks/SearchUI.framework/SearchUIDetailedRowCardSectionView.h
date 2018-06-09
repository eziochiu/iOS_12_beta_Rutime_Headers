/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate> {
    SearchUIAccessoryViewController * _accessoryViewControllerForSection;
    NSMutableDictionary * _accessoryViewControllers;
    UIButton * _buttonView;
    TLKDetailsView * _detailsView;
    TLKStackView * _innerStackView;
    SearchUIImageView * _thumbnailView;
}

@property (retain) SearchUIAccessoryViewController *accessoryViewControllerForSection;
@property (retain) NSMutableDictionary *accessoryViewControllers;
@property (retain) UIButton *buttonView;
@property (retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TLKDetailsView *detailsView;
@property (readonly) unsigned long long hash;
@property (retain) TLKStackView *innerStackView;
@property (readonly) Class superclass;
@property (retain) SearchUIImageView *thumbnailView;

+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryViewControllerForSection;
- (id)accessoryViewControllers;
- (bool)arrangedViewMustCenter:(id)arg1;
- (void)buttonPressed;
- (id)buttonView;
- (long long)containerStackView:(id)arg1 alignmentForArrangedSubview:(id)arg2;
- (id)detailsView;
- (id)innerStackView;
- (void)setAccessoryViewControllerForSection:(id)arg1;
- (void)setAccessoryViewControllers:(id)arg1;
- (void)setButtonView:(id)arg1;
- (void)setDetailsView:(id)arg1;
- (void)setInnerStackView:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (id)setupContentView;
- (id)thumbnailView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
