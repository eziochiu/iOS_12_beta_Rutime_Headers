/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataRequest : NSObject <GEOStateCapturing> {
    BOOL  _HTTPMethod;
    bool  _HTTPShouldHandleCookies;
    NSURL * _URL;
    NSDictionary * _additionalHTTPHeaders;
    bool  _allowTFOUse;
    bool  _allowTLSSessionTicketUse;
    BOOL  _allowedRequestMode;
    bool  _allowsCellularAccess;
    GEOApplicationAuditToken * _auditToken;
    NSString * _backgroundSessionIdentifier;
    NSData * _bodyData;
    NSData * _cachedData;
    int  _kind;
    bool  _needsProxy;
    <GEORequestCounterTicket> * _requestCounterTicket;
    bool  _requiresPowerPluggedIn;
    double  _timeoutInterval;
    NSObject<OS_xpc_object> * _xpcRequest;
}

@property (nonatomic, readonly) BOOL HTTPMethod;
@property (nonatomic, readonly) bool HTTPShouldHandleCookies;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *additionalHTTPHeaders;
@property (nonatomic, readonly) bool allowTFOUse;
@property (nonatomic, readonly) bool allowTLSSessionTicketUse;
@property (nonatomic, readonly) BOOL allowedRequestMode;
@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly, copy) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly, copy) NSData *bodyData;
@property (nonatomic, copy) NSData *cachedData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly) bool needsProxy;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) bool requiresPowerPluggedIn;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcRequest;

- (void).cxx_destruct;
- (BOOL)HTTPMethod;
- (bool)HTTPShouldHandleCookies;
- (id)URL;
- (id)additionalHTTPHeaders;
- (bool)allowTFOUse;
- (bool)allowTLSSessionTicketUse;
- (BOOL)allowedRequestMode;
- (bool)allowsCellularAccess;
- (id)auditToken;
- (id)backgroundSessionIdentifier;
- (id)bodyData;
- (id)cachedData;
- (id)captureStateWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)description;
- (id)init;
- (id)initHttpOnlyRequestWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 allowCellularUse:(bool)arg5 compressRequest:(bool)arg6 requestCounterTicket:(id)arg7;
- (id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(bool)arg10 allowsCellularAccess:(bool)arg11 requiresPowerPluggedIn:(bool)arg12 allowTLSSessionTicketUse:(bool)arg13 allowTFOUse:(bool)arg14 allowedRequestMode:(BOOL)arg15 userAgent:(id)arg16 entityTag:(id)arg17 cachedData:(id)arg18 requestCounterTicket:(id)arg19;
- (id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(bool)arg10 allowsCellularAccess:(bool)arg11 requiresPowerPluggedIn:(bool)arg12 allowTLSSessionTicketUse:(bool)arg13 allowTFOUse:(bool)arg14 allowedRequestMode:(BOOL)arg15 userAgent:(id)arg16 entityTag:(id)arg17 cachedData:(id)arg18 requestCounterTicket:(id)arg19 backgroundSessionIdentifier:(id)arg20;
- (id)initWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(bool)arg5 auditToken:(id)arg6 traits:(id)arg7 requestCounterTicket:(id)arg8;
- (int)kind;
- (bool)needsProxy;
- (id)newURLRequest;
- (id)publicLogDescription;
- (id)requestCounterTicket;
- (bool)requiresPowerPluggedIn;
- (void)setCachedData:(id)arg1;
- (double)timeoutInterval;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)xpcRequest;

@end
