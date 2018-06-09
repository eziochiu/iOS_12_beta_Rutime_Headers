/* made by EzioChiu.
 */

@protocol _CPCardSectionForFeedback <NSObject>

@required

- (NSString *)actionDestination;
- (NSString *)actionTarget;
- (NSString *)cardSectionId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)resultId;
- (void)setActionDestination:(NSString *)arg1;
- (void)setActionTarget:(NSString *)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setResultId:(NSString *)arg1;

@end