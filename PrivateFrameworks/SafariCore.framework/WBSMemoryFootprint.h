/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSMemoryFootprint : NSObject <NSSecureCoding> {
    struct task_vm_info { 
        unsigned long long virtual_size; 
        int region_count; 
        int page_size; 
        unsigned long long resident_size; 
        unsigned long long resident_size_peak; 
        unsigned long long device; 
        unsigned long long device_peak; 
        unsigned long long internal; 
        unsigned long long internal_peak; 
        unsigned long long external; 
        unsigned long long external_peak; 
        unsigned long long reusable; 
        unsigned long long reusable_peak; 
        unsigned long long purgeable_volatile_pmap; 
        unsigned long long purgeable_volatile_resident; 
        unsigned long long purgeable_volatile_virtual; 
        unsigned long long compressed; 
        unsigned long long compressed_peak; 
        unsigned long long compressed_lifetime; 
        unsigned long long phys_footprint; 
        unsigned long long min_address; 
        unsigned long long max_address; 
    }  _vmInfo;
    NSArray * _zones;
}

@property (nonatomic, readonly) WBSMemoryFootprintMallocZone *defaultMallocZone;
@property (nonatomic, readonly) unsigned long long dirtySize;
@property (nonatomic, readonly) unsigned long long residentSize;
@property (nonatomic, readonly) NSArray *zones;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultMallocZone;
- (id)dictionaryRepresentation;
- (unsigned long long)dirtySize;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id*)arg1;
- (unsigned long long)residentSize;
- (id)zones;

@end