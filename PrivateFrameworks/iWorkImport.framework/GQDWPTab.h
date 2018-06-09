/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPTab : NSObject <GQDNameMappable> {
    int  mAlignment;
    struct __CFString { } * mLeader;
    float  mPosition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (int)alignment;
- (void)dealloc;
- (struct __CFString { }*)leader;
- (float)position;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
