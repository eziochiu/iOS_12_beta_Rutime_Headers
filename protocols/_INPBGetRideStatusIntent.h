/* made by EzioChiu.
 */

@protocol _INPBGetRideStatusIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
