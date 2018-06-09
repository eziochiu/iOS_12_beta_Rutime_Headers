/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderRep : TSWPHeaderRep {
    bool  _hideKnobs;
    NSTimer * editingDidBeginTimer;
}

@property (nonatomic, retain) NSTimer *editingDidBeginTimer;
@property (nonatomic) bool hideKnobs;
@property (nonatomic, readonly) TPPaginatedPageInfo *pageInfo;

- (void).cxx_destruct;
- (id)editingDidBeginTimer;
- (bool)hideKnobs;
- (bool)p_isInDocumentSetup;
- (bool)p_isMiddleFooterRep;
- (bool)p_isMiddleHeaderRep;
- (bool)p_shouldCreateArrowKnobs;
- (id)pageInfo;
- (id)pageLayout;
- (void)setEditingDidBeginTimer:(id)arg1;
- (void)setHideKnobs:(bool)arg1;

@end
