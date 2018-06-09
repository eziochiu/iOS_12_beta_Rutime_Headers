/* made by EzioChiu.
 */

@protocol TSDMagicMoveMatching

@optional

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(TSDRep *)arg1 incomingObject:(TSDRep *)arg2;
+ (NSArray *)magicMoveMatchesBetweenOutgoingObjects:(NSArray *)arg1 andIncomingObjects:(NSArray *)arg2 textureContext:(TSDTextureContext *)arg3;

@end
