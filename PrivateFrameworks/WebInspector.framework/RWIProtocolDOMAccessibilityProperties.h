/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) bool busy;
@property (nonatomic) long long checked;
@property (nonatomic, copy) NSArray *childNodeIds;
@property (nonatomic, copy) NSArray *controlledNodeIds;
@property (nonatomic) long long current;
@property (nonatomic) bool disabled;
@property (nonatomic) bool exists;
@property (nonatomic) bool expanded;
@property (nonatomic, copy) NSArray *flowedNodeIds;
@property (nonatomic) bool focused;
@property (nonatomic) double headingLevel;
@property (nonatomic) bool hidden;
@property (nonatomic) double hierarchyLevel;
@property (nonatomic) bool ignored;
@property (nonatomic) bool ignoredByDefault;
@property (nonatomic) long long invalid;
@property (nonatomic) bool isPopUpButton;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool liveRegionAtomic;
@property (nonatomic, copy) NSArray *liveRegionRelevant;
@property (nonatomic) long long liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (nonatomic) int nodeId;
@property (nonatomic, copy) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) bool pressed;
@property (nonatomic) bool readonly;
@property (nonatomic) bool required;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) bool selected;
@property (nonatomic, copy) NSArray *selectedChildNodeIds;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (int)activeDescendantNodeId;
- (bool)busy;
- (long long)checked;
- (id)childNodeIds;
- (id)controlledNodeIds;
- (long long)current;
- (bool)disabled;
- (bool)exists;
- (bool)expanded;
- (id)flowedNodeIds;
- (bool)focused;
- (double)headingLevel;
- (bool)hidden;
- (double)hierarchyLevel;
- (bool)ignored;
- (bool)ignoredByDefault;
- (id)initWithExists:(bool)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4;
- (long long)invalid;
- (bool)isPopUpButton;
- (id)label;
- (bool)liveRegionAtomic;
- (id)liveRegionRelevant;
- (long long)liveRegionStatus;
- (int)mouseEventNodeId;
- (int)nodeId;
- (id)ownedNodeIds;
- (int)parentNodeId;
- (bool)pressed;
- (bool)readonly;
- (bool)required;
- (id)role;
- (bool)selected;
- (id)selectedChildNodeIds;
- (void)setActiveDescendantNodeId:(int)arg1;
- (void)setBusy:(bool)arg1;
- (void)setChecked:(long long)arg1;
- (void)setChildNodeIds:(id)arg1;
- (void)setControlledNodeIds:(id)arg1;
- (void)setCurrent:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setExists:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFlowedNodeIds:(id)arg1;
- (void)setFocused:(bool)arg1;
- (void)setHeadingLevel:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHierarchyLevel:(double)arg1;
- (void)setIgnored:(bool)arg1;
- (void)setIgnoredByDefault:(bool)arg1;
- (void)setInvalid:(long long)arg1;
- (void)setIsPopUpButton:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLiveRegionAtomic:(bool)arg1;
- (void)setLiveRegionRelevant:(id)arg1;
- (void)setLiveRegionStatus:(long long)arg1;
- (void)setMouseEventNodeId:(int)arg1;
- (void)setNodeId:(int)arg1;
- (void)setOwnedNodeIds:(id)arg1;
- (void)setParentNodeId:(int)arg1;
- (void)setPressed:(bool)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setRequired:(bool)arg1;
- (void)setRole:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedChildNodeIds:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithExists:(bool)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4;

@end
