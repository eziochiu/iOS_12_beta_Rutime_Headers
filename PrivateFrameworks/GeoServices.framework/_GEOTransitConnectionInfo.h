/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {
    GEOPDTransitConnection * _connection;
    int  _providerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int providerID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *urlToOpen;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1 providerID:(int)arg2;
- (id)labelItems;
- (unsigned long long)muid;
- (id)name;
- (int)providerID;
- (id)urlToOpen;

@end