/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface XMLWrapperElement : NSObject {
    NSMutableDictionary * _attributes;
    NSArray * _childElementSequence;
    NSMutableArray * _elements;
    NSMutableDictionary * _namespaces;
    bool  _ownsXMLNode;
    XMLWrapperQuery * _query;
    NSString * _tagName;
    NSString * _textContent;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * _xmlNode;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) NSArray *childElementSequence;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) NSDictionary *namespaces;
@property (nonatomic, retain) XMLWrapperQuery *query;
@property (nonatomic, retain) NSString *tagName;
@property (nonatomic, retain) NSString *textContent;

- (void).cxx_destruct;
- (void)addChildElement:(id)arg1;
- (void)addChildElement:(id)arg1 before:(id)arg2;
- (id)attributeWithName:(id)arg1;
- (id)attributes;
- (id)childElementSequence;
- (void)dealloc;
- (id)elements;
- (id)firstElementByTagName:(id)arg1;
- (id)firstResultByXpathQuery:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)getResultsByXpathQuery:(id)arg1;
- (id)initWithNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 doc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2 query:(id)arg3 error:(id*)arg4;
- (id)initWithTagName:(id)arg1 error:(id*)arg2;
- (id)namespaces;
- (id)query;
- (void)removeChildElement:(id)arg1;
- (void)reorderChildElements;
- (void)replaceChildElement:(id)arg1 newElement:(id)arg2;
- (void)setAttributeWithName:(id)arg1 value:(id)arg2;
- (void)setChildElementSequence:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setNamespace:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setTagName:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)tagName;
- (id)textContent;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlNode:(id*)arg1;
- (id)xmlString:(id*)arg1;

@end
