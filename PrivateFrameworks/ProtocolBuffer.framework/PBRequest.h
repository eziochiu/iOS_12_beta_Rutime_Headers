/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBRequest : PBCodable

- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
