/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSItemsRequest : HSRequest {
    bool  _includeHiddenItems;
    bool  _shouldParseResponse;
}

@property (nonatomic) bool includeHiddenItems;
@property (nonatomic) bool shouldParseResponse;

+ (id)requestWithDatabaseID:(unsigned int)arg1;
+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;

- (id)canonicalResponseForResponse:(id)arg1;
- (bool)includeHiddenItems;
- (id)initWithAction:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
- (void)setIncludeHiddenItems:(bool)arg1;
- (void)setShouldParseResponse:(bool)arg1;
- (bool)shouldParseResponse;
- (double)timeoutInterval;

@end
