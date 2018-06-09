/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    NSURL * _baseURL;
    NSMutableData * _cDATA;
    NSDictionary * _cachedElementParseRules;
    NSMutableData * _characters;
    bool  _checkedElementValidityIfRootElement;
    CoreDAVXMLElementGenerator * _currentlyParsingSubItem;
    CoreDAVItem * _element;
    bool  _isUnrecognized;
    CoreDAVItem * _parentElement;
    SEL  _parentElementSetter;
    CoreDAVXMLElementGenerator * _parentGenerator;
    int  _parsingState;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSMutableData *cDATA;
@property (nonatomic, retain) NSDictionary *cachedElementParseRules;
@property (nonatomic, retain) NSMutableData *characters;
@property (nonatomic) bool checkedElementValidityIfRootElement;
@property (nonatomic, retain) CoreDAVXMLElementGenerator *currentlyParsingSubItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CoreDAVItem *element;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUnrecognized;
@property (nonatomic) SEL parentElementSetter;
@property (nonatomic) CoreDAVXMLElementGenerator *parentGenerator;
@property (nonatomic) int parsingState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)cDATA;
- (id)cachedElementParseRules;
- (id)characters;
- (bool)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (id)element;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (bool)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (bool)isUnrecognized;
- (void)noteChildCascadingFailure;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (SEL)parentElementSetter;
- (id)parentGenerator;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (int)parsingState;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCDATA:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (void)setCharacters:(id)arg1;
- (void)setCheckedElementValidityIfRootElement:(bool)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setIsUnrecognized:(bool)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (void)setParentGenerator:(id)arg1;
- (void)setParsingState:(int)arg1;
- (bool)tracksRootElement;

@end
