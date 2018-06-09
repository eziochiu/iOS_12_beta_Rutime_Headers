/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult> {
    NSData * _destinationData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *destinationData;
@property (retain) NSURL *destinationURL;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)destinationData;
- (void)setDestinationData:(id)arg1;

@end
