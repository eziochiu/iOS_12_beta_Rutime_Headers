/* made by EzioChiu.
 */

@protocol PGGraphPhotoEvent <PGGraphEvent>

@required

+ (NSArray *)scoreSortDescriptors;

- (NSString *)localIdentifier;

@end
