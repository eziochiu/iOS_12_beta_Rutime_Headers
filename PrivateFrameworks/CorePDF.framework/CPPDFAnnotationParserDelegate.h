/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    struct __CFDictionary { } * _annotationDictionary;
    NSMutableString * _characters;
    struct CGColor { } * _color;
    struct __CFString { } * _content;
    struct __CFString { } * _id;
    struct __CFString { } * _otherId;
    struct CGPoint { 
        double x; 
        double y; 
    }  _p;
    bool  _parseError;
    struct __CFArray { } * _quadPoints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic) struct __CFDictionary { }*annotationDictionary;
@property (nonatomic, readonly) struct __CFString { }*annotationId;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) struct __CFString { }*content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFString { }*otherId;
@property (nonatomic, readonly) bool parseError;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (readonly) Class superclass;

- (void)addQuadpoints;
- (struct __CFDictionary { }*)annotationDictionary;
- (struct __CFString { }*)annotationId;
- (struct CGColor { }*)color;
- (struct __CFString { }*)content;
- (void)dealloc;
- (id)init;
- (struct __CFString { }*)otherId;
- (bool)parseError;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setAnnotationDictionary:(struct __CFDictionary { }*)arg1;

@end
