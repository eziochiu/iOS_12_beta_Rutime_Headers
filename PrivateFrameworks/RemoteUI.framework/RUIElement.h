/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIElement : NSObject {
    NSMutableDictionary * _attributes;
    NSString * _body;
    bool  _enabled;
    NSString * _identifier;
    RUIElement * _parent;
    RUIStyle * _style;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) RUIElement *parent;
@property (nonatomic, retain) RUIStyle *style;

- (void).cxx_destruct;
- (struct OpaqueJSValue { }*)JSValueForContext:(struct OpaqueJSContext { }*)arg1;
- (id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2;
- (struct OpaqueJSClass { }*)_JSClass;
- (int)_horizontalAlignmentForString:(id)arg1;
- (id)_ruielement_staticFunctions;
- (id)_ruielement_staticValues;
- (id)attributes;
- (id)body;
- (void)configureView:(id)arg1;
- (void)dealloc;
- (bool)enabled;
- (bool)hasImage;
- (id)identifier;
- (void)imageLoaded:(id)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (bool)loadImage;
- (id)mutableAttributes;
- (id)name;
- (id)pageElement;
- (id)parent;
- (void)performAction:(int)arg1 completion:(id /* block */)arg2;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(id /* block */)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyle:(id)arg1;
- (id)sourceURL;
- (id)staticFunctions;
- (id)staticValues;
- (id)style;
- (id)subElementWithID:(id)arg1;
- (id)subElementsWithName:(id)arg1;

@end
