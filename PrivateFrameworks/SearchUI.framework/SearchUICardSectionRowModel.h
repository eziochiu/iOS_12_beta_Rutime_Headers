/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardSectionRowModel : NSObject <SearchUIAuxilliaryFieldProtocol, SearchUIRowModel> {
    SFCardSection * _cardSection;
    SFSearchResult * _identifyingResult;
}

@property (readonly) SFActionItem *action;
@property (readonly) NSString *auxiliaryBottomText;
@property (readonly) int auxiliaryBottomTextColor;
@property (readonly) NSString *auxiliaryMiddleText;
@property (readonly) NSString *auxiliaryTopText;
@property (readonly) SFCard *card;
@property (retain) SFCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SFSearchResult *identifyingResult;
@property (retain) SFSearchResult *identifyingResult;
@property (readonly) Class superclass;
@property (readonly) SFImage *thumbnail;
@property (readonly) SFRichText *title;

- (void).cxx_destruct;
- (id)action;
- (bool)anyInlineCardSectionsHaveNextCards;
- (bool)anyInlineCardSectionsHavePunchouts;
- (id)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (id)auxiliaryMiddleText;
- (id)auxiliaryTopText;
- (id)card;
- (id)cardSection;
- (id)detailedRowCardSection;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2;
- (bool)isDraggable;
- (bool)isSuggestion;
- (bool)isTappable;
- (double)leadingSeparatorImageInset;
- (id)nextCard;
- (id)punchouts;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (void)setCardSection:(id)arg1;
- (void)setIdentifyingResult:(id)arg1;
- (id)thumbnail;
- (id)title;
- (Class)viewClass;

@end
