/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
    NSURL * _baseURL;
    NSSet * _parseHints;
    CoreDAVXMLElementGenerator * _rootElementGenerator;
    CoreDAVXMLElementGenerator * _rootErrorGenerator;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *parseHints;
@property (readonly) NSError *parserError;
@property (nonatomic, readonly) CoreDAVItem *rootElement;
@property (nonatomic, retain) CoreDAVXMLElementGenerator *rootElementGenerator;
@property (nonatomic, readonly) CoreDAVErrorItem *rootError;
@property (nonatomic, retain) CoreDAVXMLElementGenerator *rootErrorGenerator;
@property (readonly) Class superclass;

+ (bool)canHandleContentType:(id)arg1;

- (void).cxx_destruct;
- (id)baseURL;
- (id)initWithData:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)parseHints;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (id)rootElement;
- (id)rootElementGenerator;
- (id)rootError;
- (id)rootErrorGenerator;
- (void)setBaseURL:(id)arg1;
- (void)setParseHints:(id)arg1;
- (void)setRootElementGenerator:(id)arg1;
- (void)setRootErrorGenerator:(id)arg1;

@end
