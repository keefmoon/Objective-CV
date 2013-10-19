//
//  KMRole.h
//  CV
//
//  Created by Keith Moon on 19/10/2013.
//  Copyright (c) 2013 Data Ninjitsu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KMCompany.h"

@interface KMRole : NSObject

@property (nonatomic, strong) KMCompany *company;
@property (nonatomic, strong) NSDate    *startDate;
@property (nonatomic, strong) NSDate    *endDate;

@end
