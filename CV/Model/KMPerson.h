//
//  KMPerson.h
//  CV
//
//  Created by Keith Moon on 19/10/2013.
//  Copyright (c) 2013 Data Ninjitsu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMPerson : NSObject

@property (nonatomic, strong) NSString  *firstName;
@property (nonatomic, strong) NSString  *lastName;
@property (nonatomic, strong) NSDate    *dateOfBirth;
@property (nonatomic, strong) UIImage   *picture;
@property (nonatomic, strong) NSString  *emailAddress;
@property (nonatomic, strong) NSString  *phoneNumber;
@property (nonatomic, strong) NSURL     *website;

@end
