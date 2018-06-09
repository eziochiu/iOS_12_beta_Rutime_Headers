/* made by EzioChiu.
 */

@protocol _INPBPlace <NSObject>

@required

+ (Class)placeDescriptorsType;

- (void)addPlaceDescriptors:(_INPBString *)arg1;
- (void)clearPlaceDescriptors;
- (bool)hasPlaceSubType;
- (bool)hasPlaceType;
- (NSArray *)placeDescriptors;
- (_INPBString *)placeDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDescriptorsCount;
- (_INPBString *)placeSubType;
- (_INPBString *)placeType;
- (void)setPlaceDescriptors:(NSArray *)arg1;
- (void)setPlaceSubType:(_INPBString *)arg1;
- (void)setPlaceType:(_INPBString *)arg1;

@end
