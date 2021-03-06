/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {
    bool  _inspectorPaneAutoHidden;
    long long  _inspectorPaneViewMode;
    bool  _showingElementList;
    bool  _showingInspectorPane;
    bool  _showingLightTable;
    bool  _showingMasterSlides;
    bool  _showingNavigatorViewInSidebar;
    bool  _showingPresenterNotes;
    bool  _showingSidebar;
}

@property (nonatomic, readonly) long long inspectorPaneHiddenState;
@property (nonatomic, readonly) long long inspectorPaneViewMode;
@property (getter=p_isShowingNavigatorViewInSidebar, nonatomic, readonly) bool p_showingNavigatorViewInSidebar;
@property (getter=isShowingElementList, nonatomic, readonly) bool showingElementList;
@property (getter=isShowingLightTable, nonatomic, readonly) bool showingLightTable;
@property (getter=isShowingMasterSlides, nonatomic, readonly) bool showingMasterSlides;
@property (getter=isShowingPresenterNotes, nonatomic, readonly) bool showingPresenterNotes;
@property (getter=isShowingSidebar, nonatomic, readonly) bool showingSidebar;
@property (nonatomic, readonly) long long sidebarViewMode;

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; bool x12; bool x13; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;

- (id)archivedUILayoutInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)inspectorPaneAutoHidden;
- (long long)inspectorPaneHiddenState;
- (long long)inspectorPaneViewMode;
- (bool)isEqual:(id)arg1;
- (bool)isShowingElementList;
- (bool)isShowingLightTable;
- (bool)isShowingMasterSlides;
- (bool)isShowingPresenterNotes;
- (bool)isShowingSidebar;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)p_isShowingNavigatorViewInSidebar;
- (void)saveToArchive:(struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; bool x12; bool x13; }*)arg1 archiver:(id)arg2;
- (void)setInspectorPaneAutoHidden:(bool)arg1;
- (void)setShowingInspectorPane:(bool)arg1;
- (bool)showingInspectorPane;
- (long long)sidebarViewMode;

@end
