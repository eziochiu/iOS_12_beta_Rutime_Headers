/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedUIState : TSPObject {
    TPArchivedLayoutState * _layoutState;
    TPArchivedViewState * _viewState;
}

@property (nonatomic, retain) TPArchivedLayoutState *layoutState;
@property (nonatomic, readonly) TPArchivedViewState *viewState;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)layoutState;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setLayoutState:(id)arg1;
- (id)viewState;

@end
