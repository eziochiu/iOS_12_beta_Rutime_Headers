/* made by EzioChiu.
 */

@protocol MTCoder

@required

- (bool)mt_isReadingFromPersistence;
- (bool)mt_isWritingToPersistence;
- (bool)mt_isWritingToStorage;

@end
