/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest {
    WebBookmark * _bookmark;
}

@property (nonatomic, readonly) WebBookmark *bookmark;

+ (id)requestWithBookmark:(id)arg1;
+ (id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(bool)arg2;

- (void).cxx_destruct;
- (id)bookmark;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 iconGenerationEnabled:(bool)arg2;
- (id)uniqueIdentifier;

@end
