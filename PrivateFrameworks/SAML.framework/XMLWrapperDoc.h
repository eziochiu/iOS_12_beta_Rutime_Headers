/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface XMLWrapperDoc : NSObject {
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } * _doc;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * _docNode;
    XMLWrapperElement * _documentElement;
    NSMutableDictionary * _namespaces;
    XMLWrapperQuery * _query;
    NSData * _schemaData;
    NSData * _xmlData;
}

@property (nonatomic, retain) XMLWrapperElement *documentElement;
@property (nonatomic, readonly) NSDictionary *namespaces;
@property (nonatomic, retain) XMLWrapperQuery *query;
@property (nonatomic, retain) NSData *schemaData;
@property (nonatomic, retain) NSData *xmlData;

- (void).cxx_destruct;
- (bool)createDocument:(id*)arg1;
- (id)createDocumentElement:(id*)arg1;
- (void)dealloc;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)docNode:(id*)arg1;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)docPtr;
- (id)documentElement;
- (id)firstResultByXpathQuery:(id)arg1 error:(id*)arg2;
- (id)getResultsByXpathQuery:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)namespaces;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)nodePtr;
- (id)query;
- (id)schemaData;
- (void)setDocumentElement:(id)arg1;
- (void)setNamespace:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSchemaData:(id)arg1;
- (bool)setXMLDoc:(id*)arg1;
- (void)setXmlData:(id)arg1;
- (id)xmlData;
- (id)xmlString:(id*)arg1;

@end
