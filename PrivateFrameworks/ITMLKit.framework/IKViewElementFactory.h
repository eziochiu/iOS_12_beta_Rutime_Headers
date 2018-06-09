/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementFactory : NSObject {
    IKViewElementRegistry * _elementRegistry;
    struct { 
        unsigned int sparse : 1; 
        unsigned int parsingUpdatedTree : 1; 
        unsigned int parsingReorderedSiblings : 1; 
        unsigned int parsingUpdatedData : 1; 
        unsigned int parsingPartOfPrototype : 1; 
    }  _parsingFlags;
    IKViewElementStyleFactory * _styleFactory;
}

@property (getter=isSparse, nonatomic) bool sparse;
@property (nonatomic, retain) IKViewElementStyleFactory *styleFactory;

+ (Class)elementClassByTagName:(id)arg1;
+ (bool)elementsForDocumentElement:(id)arg1 context:(id)arg2;
+ (void)initialize;
+ (bool)isDependentByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(bool)arg4;

- (void).cxx_destruct;
- (Class)elementClassByTagName:(id)arg1;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (id)initWithElementRegistry:(id)arg1;
- (bool)isSparse;
- (void)setSparse:(bool)arg1;
- (void)setStyleFactory:(id)arg1;
- (id)styleFactory;

@end
