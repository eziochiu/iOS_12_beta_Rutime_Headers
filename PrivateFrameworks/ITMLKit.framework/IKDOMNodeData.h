/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeData : NSObject {
    bool  _autoHighlightRead;
    bool  _bindingUpdated;
    bool  _childrenUpdated;
    bool  _dataUpdated;
    NSMutableDictionary * _featuresMap;
    IKDOMNode * _ownerJSNode;
    bool  _subtreeUpdated;
    bool  _updated;
}

@property (getter=isAutoHighlightRead, nonatomic) bool autoHighlightRead;
@property (getter=isBindingUpdated, nonatomic) bool bindingUpdated;
@property (getter=isChildrenUpdated, nonatomic) bool childrenUpdated;
@property (getter=isDataUpdated, nonatomic) bool dataUpdated;
@property (nonatomic, retain) NSMutableDictionary *featuresMap;
@property (nonatomic) IKDOMNode *ownerJSNode;
@property (getter=isSubtreeUpdated, nonatomic) bool subtreeUpdated;
@property (getter=isUpdated, nonatomic) bool updated;

+ (id)jsNodeDataForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 create:(bool)arg2;
+ (void)load;

- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (id)featuresMap;
- (bool)isAutoHighlightRead;
- (bool)isBindingUpdated;
- (bool)isChildrenUpdated;
- (bool)isDataUpdated;
- (bool)isSubtreeUpdated;
- (bool)isUpdated;
- (id)ownerJSNode;
- (void)setAutoHighlightRead:(bool)arg1;
- (void)setBindingUpdated:(bool)arg1;
- (void)setChildrenUpdated:(bool)arg1;
- (void)setDataUpdated:(bool)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
- (void)setFeaturesMap:(id)arg1;
- (void)setOwnerJSNode:(id)arg1;
- (void)setSubtreeUpdated:(bool)arg1;
- (void)setUpdated:(bool)arg1;

@end
