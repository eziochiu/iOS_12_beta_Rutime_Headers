/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacMutableUILayout : KNMacUILayout

@property (nonatomic) long long inspectorPaneHiddenState;
@property (nonatomic) long long inspectorPaneViewMode;
@property (getter=isShowingElementList, nonatomic) bool showingElementList;
@property (getter=isShowingLightTable, nonatomic) bool showingLightTable;
@property (getter=isShowingMasterSlides, nonatomic) bool showingMasterSlides;
@property (getter=isShowingPresenterNotes, nonatomic) bool showingPresenterNotes;
@property (getter=isShowingSidebar, nonatomic) bool showingSidebar;
@property (nonatomic) long long sidebarViewMode;

- (void)setInspectorPaneHiddenState:(long long)arg1;
- (void)setInspectorPaneViewMode:(long long)arg1;
- (void)setShowingElementList:(bool)arg1;
- (void)setShowingLightTable:(bool)arg1;
- (void)setShowingMasterSlides:(bool)arg1;
- (void)setShowingPresenterNotes:(bool)arg1;
- (void)setShowingSidebar:(bool)arg1;
- (void)setSidebarViewMode:(long long)arg1;

@end
