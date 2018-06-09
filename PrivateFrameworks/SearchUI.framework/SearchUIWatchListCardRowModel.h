/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel {
    long long  _buttonState;
    <SearchUIWatchListCardRowModelDelegate> * _delegate;
    bool  _hasLoaded;
    SFImage * _image;
    SearchUIWatchListCardsManager * _manager;
    SFPunchout * _punchout;
    NSString * _text;
}

@property long long buttonState;
@property (retain) SFWatchListCardSection *cardSection;
@property <SearchUIWatchListCardRowModelDelegate> *delegate;
@property bool hasLoaded;
@property (retain) SFImage *image;
@property (retain) SearchUIWatchListCardsManager *manager;
@property (retain) SFPunchout *punchout;
@property (retain) NSString *text;

- (void).cxx_destruct;
- (long long)buttonState;
- (id)delegate;
- (bool)hasLoaded;
- (id)image;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3;
- (id)manager;
- (id)punchout;
- (void)setButtonState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4;

@end
