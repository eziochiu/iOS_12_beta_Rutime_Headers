/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLRegionInternal : NSObject {
    struct { 
        BOOL identifier[512]; 
        BOOL onBehalfOfIdentifier[512]; 
        int type; 
        bool notifyOnEntry; 
        bool notifyOnExit; 
        bool conservativeEntry; 
        union { 
            struct { 
                BOOL proximityUUID[512]; 
                unsigned short major; 
                unsigned short minor; 
                int definitionMask; 
                bool notifyEntryStateOnDisplay; 
            } beaconAttributes; 
            struct { 
                struct { 
                    double latitude; 
                    double longitude; 
                } center; 
                double radius; 
                double desiredAccuracy; 
                int referenceFrame; 
                bool allowMonitoringWhileNearby; 
            } circularAttributes; 
        } ; 
    }  _clientRegion;
}

@end
