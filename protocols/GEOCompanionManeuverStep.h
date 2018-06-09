/* made by EzioChiu.
 */

@protocol GEOCompanionManeuverStep <NSObject>

@required

- (void)addManeuverName:(GEONameInfoList *)arg1;
- (void)addSignpost:(GEONameInfo *)arg1;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (bool)hasJunctionType;
- (bool)hasManeuverType;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (unsigned long long)junctionElementsCount;
- (int)junctionType;
- (GEONameInfoList *)maneuverNameAtIndex:(unsigned long long)arg1;
- (NSMutableArray *)maneuverNames;
- (unsigned long long)maneuverNamesCount;
- (int)maneuverType;
- (void)setHasJunctionType:(bool)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverNames:(NSMutableArray *)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setSignposts:(NSMutableArray *)arg1;
- (GEONameInfo *)signpostAtIndex:(unsigned long long)arg1;
- (NSMutableArray *)signposts;
- (unsigned long long)signpostsCount;
- (int)transportType;

@end
