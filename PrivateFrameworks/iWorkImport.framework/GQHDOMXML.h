/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHDOMXML : NSObject <GQHXMLOutput> {
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * mCurrentNode;
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } * mXMLDoc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData { }*)createHtml;
- (struct __CFData { }*)createHtmlWithCss:(struct __CFString { }*)arg1;
- (struct __CFData { }*)createProgressiveHtml;
- (void)dealloc;
- (void)endElement;
- (void)endElementWithExpectedName:(const char *)arg1;
- (id)initEmpty;
- (id)initWithHead;
- (void)removeStyleSheetLinkNodeAndAddStyle:(struct __CFString { }*)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;

@end
