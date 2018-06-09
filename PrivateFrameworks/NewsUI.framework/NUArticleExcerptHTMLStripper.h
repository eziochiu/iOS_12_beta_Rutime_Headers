/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate> {
    NSMutableArray * _parts;
    NSString * _strippedString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *parts;
@property (nonatomic, readonly) NSString *strippedString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHTMLString:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)parts;
- (id)stripHTMLString:(id)arg1;
- (id)strippedString;

@end
