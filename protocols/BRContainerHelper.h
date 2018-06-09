/* made by EzioChiu.
 */

@protocol BRContainerHelper <NSObject>

@required

- (unsigned short)br_capabilityToMoveFromURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 error:(id*)arg3;
- (bool)canFetchAllContainersByID;
- (NSDictionary *)fetchAllContainersByIDWithError:(id*)arg1;
- (BRContainer *)fetchContainerForURL:(NSURL *)arg1;
- (NSString *)itemIDForURL:(NSURL *)arg1 error:(id*)arg2;

@end
