/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptHTML : NSObject {
    NSURL * _URL;
    unsigned long long  _lengthType;
    NSString * _processedHTML;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long lengthType;
@property (nonatomic, readonly) NSString *processedHTML;

+ (id)articleExcerptCSS;
+ (id)articleExcerptHTML;

- (void).cxx_destruct;
- (id)URL;
- (id)embedCSSIntoExcerptHTML:(id)arg1 scale:(double)arg2;
- (id)excerptHTMLToProcessedHTML:(id)arg1 article:(id)arg2 scale:(double)arg3;
- (id)initWithArticle:(id)arg1 excerptHTML:(id)arg2 scale:(double)arg3;
- (unsigned long long)lengthType;
- (id)paragraphShortExcerptHTML:(id)arg1 article:(id)arg2;
- (id)processedHTML;
- (id)stripHTMLTagsFromExcerptHTML:(id)arg1;

@end
