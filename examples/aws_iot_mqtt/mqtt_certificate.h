/**
 * Copyright (c) 2021 WIZnet Co.,Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _MQTT_CERTIFICATE_H_
#define _MQTT_CERTIFICATE_H_

//***************************Koera seoul***************************
uint8_t mqtt_root_ca[] =
    "-----BEGIN CERTIFICATE-----\n"
    "MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
    "ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
    "b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
    "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
    "b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
    "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
    "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
    "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
    "VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"
    "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
    "jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
    "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
    "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
    "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
    "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
    "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
    "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
    "rqXRfboQnoZsG4q5WTP468SQvvG5\n"
    "-----END CERTIFICATE-----\n";

uint8_t mqtt_client_cert[] =
    "-----BEGIN CERTIFICATE-----\n"
    "MIIDWTCCAkGgAwIBAgIUVDmacZrDwP2pRAxRT+Z9UAVL4WYwDQYJKoZIhvcNAQEL\n"
    "BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"
    "SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDgyOTA0NTYw\n"
    "MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"
    "ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAOJojuLYxGDJw+h5n6nH\n"
    "4q38kfmsdiF7hAC0kpKRalL+YGSkeKwkfXfUuMcCyyz5Cgyr6gptYP2OQrxRvZ2I\n"
    "vVrceJ8w5jeFOpNJFZ1h2KA19EjJxnrgbHubW/ehZD1AffJKSqm9UGGuDzxQw40A\n"
    "2TZzAI6EAZHLJhMRDKthP46kys8zN5+pQqcR7YxDMIG0FSMnYL+DKDtLRa6HZy2W\n"
    "kbbU4ILPsbtcMqVQifih1iGzH2/QVp8eEM3Ev26nLJuNTTefaEmwospPjfmVHu77\n"
    "dh0tSXSCBl/mt0I6fH8ZaYgMurEQbBxp71uS07YSlyt7OXuXe7iaMd71Suc0RrCd\n"
    "NQMCAwEAAaNgMF4wHwYDVR0jBBgwFoAUPm5X63UvjEZLrpBlcyzX4gDcLsYwHQYD\n"
    "VR0OBBYEFPjfhtXNqjNkbAyOuohJrRR8FRCnMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"
    "AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAJh9Lp2/NmoRiqlZZke+csy1Mo\n"
    "DfpX459GCCwhZmmOh2DQoiAtkgQdmZ/EwoXi5d88DR9q193CLrL7FRahkyENb8Nb\n"
    "Gn13Dw2tG7e79+K7FH23XFKq7v1UDAseywkxssQOXJAyvWdGkimZTEbRM0Fq+q/+\n"
    "wvP39wECjtGUeCpOJTsgDaZEn2A/npxgnXjCqgqSLpsPsbO1PoHffBvXGImxd6xq\n"
    "mwclykmbSVR6NGFbDfHv4H0vED8I0dJOaNny4gYa6b3zZjzE+5VkNggBAF/gBoXr\n"
    "deJNXT6gFens/LIwDDyh8lUu9JfKg2PxTpZRPNfw4C7/ksINYQWpNt0PGc07\n"
    "-----END CERTIFICATE-----\n";

uint8_t mqtt_private_key[] =
    "-----BEGIN RSA PRIVATE KEY-----\n"
    "MIIEowIBAAKCAQEA4miO4tjEYMnD6HmfqcfirfyR+ax2IXuEALSSkpFqUv5gZKR4\n"
    "rCR9d9S4xwLLLPkKDKvqCm1g/Y5CvFG9nYi9Wtx4nzDmN4U6k0kVnWHYoDX0SMnG\n"
    "euBse5tb96FkPUB98kpKqb1QYa4PPFDDjQDZNnMAjoQBkcsmExEMq2E/jqTKzzM3\n"
    "n6lCpxHtjEMwgbQVIydgv4MoO0tFrodnLZaRttTggs+xu1wypVCJ+KHWIbMfb9BW\n"
    "nx4QzcS/bqcsm41NN59oSbCiyk+N+ZUe7vt2HS1JdIIGX+a3Qjp8fxlpiAy6sRBs\n"
    "HGnvW5LTthKXK3s5e5d7uJox3vVK5zRGsJ01AwIDAQABAoIBAQCSYnIH/4kw3yM4\n"
    "evKdbmyEe6nSGQyj511Yq2edNkHdeTTPvXt8KXep87KokYjWAgraWIjQxxmPttw1\n"
    "MFB9u3xac/PVUWN4AD74HafJAwtxwpC4QyV+Kv5ZCQD0YbgS1lDYR+pwRsPi9AxL\n"
    "vhhBYYwPZVm1y2nMXuG2MC7V2+GhEnl9tthHl6/hNdY4GJHHZPDqdGch3+URWwGk\n"
    "Jpy7DtJvgj8iaaule76MD4YxeUa9ewEjRS2SKJEWYTS//wkHoBt9Io8GuBkaaqQJ\n"
    "rwKRwKQ+TQmDf+kqnVtf87eHcFKZP6lyI+RaOsvpmhJQx0KE5YeV6Erdeoxoh0Md\n"
    "oyxWtL0ZAoGBAP4KIvDal7yJ3mAi1zWATjt0pVFjteRER7xieQ1UzwhdvEfIGVr5\n"
    "304wE8bUi8Ompz8amm0P12hnTBfqB0bublrnYAPVq0iFuvzFb65NOX+Uv7c5XDe8\n"
    "1+kr/0VZa0IPC/V79v5ePo7XkPO3bDXC64I2GBZjFa2AoWPbztY//me3AoGBAOQn\n"
    "1dxEIRJy1iQQrBam5xV9ryBspUVDJ8q4bzp8p29CK5G/US8uuS5iSl9XDmRdGxjs\n"
    "Nkaao69DiwtOQGwANb8tETQZygNkknMs0UkExZsqmbx+pdF5KxqW7CoYr4ywnTyy\n"
    "9J7RYXqBDyMCRXpOC2oWbavUIOwYj8CpttThyOUVAoGANfA7CP6wtwRi5fCf1yk9\n"
    "8xvKOiS8qxHgVVxnLXBzYOheILOYxptFUZmdqVrZrhoFar2gSkXRy8Ya/vzevK3F\n"
    "WqHD3iyQ6J4UXLUjCFQ3QCJ6LlIMhX0gLs77rWLWBjmhpWbDw7CJAdU9XrH0VNnl\n"
    "HUmVBbPWF3e3TLeQDCecQbMCgYBVpOJxmZ10iGj8Bsoigqpx9cj8eewcMNZKEaun\n"
    "H83WRNeIEXIPLRHUaI8UdOBxKkYWt+yz2i6hhtA2ATzLjdSfG/K+RQQA/ArBc0xo\n"
    "hYML+RTWng/urvZQN+EU+ElFnbKYa3DKATz/OF0PPjYIcC12uE6Y1rs5BQtJPivk\n"
    "g5De9QKBgC4C3ueifDiP/i5bYHoRvJfZoRkSat/v4zs6KoAH4frKmxt6nTpdLkCS\n"
    "aJD7ERXd8GJDYhEMJk9FCgXI6qFe/M5nuhqU3VMAESCzgLtsmVYAnB0+dY85gpa1\n"
    "YiNxUU5VJNaNTLwE9guZOsUTpKIvWqAio/j13oQU96iuTuPNrRnS\n"
    "-----END RSA PRIVATE KEY-----\n";

/*
//***************************Virgin East***************************
uint8_t mqtt_root_ca[] =
    "-----BEGIN CERTIFICATE-----\n"
    "MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
    "ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
    "b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
    "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
    "b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
    "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
    "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
    "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
    "VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"
    "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
    "jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
    "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
    "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
    "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
    "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
    "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
    "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
    "rqXRfboQnoZsG4q5WTP468SQvvG5\n"
    "-----END CERTIFICATE-----\n";

uint8_t mqtt_client_cert[] =
    "-----BEGIN CERTIFICATE-----\n"
    "MIIDWTCCAkGgAwIBAgIUUR0U5vfWy7fsOq1DV8br6PVXEa8wDQYJKoZIhvcNAQEL\n"
    "BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"
    "SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDgyOTA0NDU0\n"
    "OVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"
    "ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAJ9Ud/ebAUnaa6LIFOeW\n"
    "uKBA32XpW5Nwwy3EM6gSdcfoEWpsaEOLbVo0CZ6BQAw63pfvBl5iIspdWBmCtkNR\n"
    "z+HNV12VY/3ftzF80qX6Z14gU9pVRQmZtusw3v9AMJYZg1Ca3a+GxTZNtkwfwgUu\n"
    "fNVCpCDkTe04DYrtlDJwPJAZN/v39eLn0eoFjPNGDyNAj+KGffYw03iSZM5tjgDT\n"
    "kkn56h3IHAsOOnMgBN/pU7vWVr6rmLoRuUbhJfTbG24Y4L5BSlqTDVa4MiLLbMjv\n"
    "AshTnHZj1cMGEAEjru9/UB3C1KcJUhPCK4PCHi6fuuNwrELID4dJ4ts/h/nGqr9J\n"
    "YkMCAwEAAaNgMF4wHwYDVR0jBBgwFoAUFJqkVZKKouE4jnSLwRUExhy0hy0wHQYD\n"
    "VR0OBBYEFGE2Y8I8onpsEELV7fJfFuBMbamDMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"
    "AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCgwDG94Ckfzxv4WI7y3iKXmqkE\n"
    "wklkdwFNDkfCvuj291LHz6PLasJkTDbRj7CTW9wekXobb2tA32JWCwHPFyfrbO2/\n"
    "PjfQFXAh8FsI0ZCxV3jnnXg32v89mVZVtcGLfQESLkLzkr0YzBxuOrHR1bhgrca0\n"
    "eGBtY1P15xOMnnlz/KgICu3z/KNmq1cqxi4OUjNlkSZJ/EPA2VB5Aj0Hi3svhetL\n"
    "OS5l0Kyi2IvMkYNRfVFhyvJak1hUruPtjhZBMbUTzzguLbHS5lVw+IuPYBZwVEM/\n"
    "kE5Afyl0dumu+lqD68eo7qJyVD4kfkAaCsoyWi9rqpdZztOcl4aY3WoXhBYR\n"
    "-----END CERTIFICATE-----\n";

uint8_t mqtt_private_key[] =
    "-----BEGIN RSA PRIVATE KEY-----\n"
    "MIIEpQIBAAKCAQEAn1R395sBSdprosgU55a4oEDfZelbk3DDLcQzqBJ1x+gRamxo\n"
    "Q4ttWjQJnoFADDrel+8GXmIiyl1YGYK2Q1HP4c1XXZVj/d+3MXzSpfpnXiBT2lVF\n"
    "CZm26zDe/0AwlhmDUJrdr4bFNk22TB/CBS581UKkIORN7TgNiu2UMnA8kBk3+/f1\n"
    "4ufR6gWM80YPI0CP4oZ99jDTeJJkzm2OANOSSfnqHcgcCw46cyAE3+lTu9ZWvquY\n"
    "uhG5RuEl9NsbbhjgvkFKWpMNVrgyIstsyO8CyFOcdmPVwwYQASOu739QHcLUpwlS\n"
    "E8Irg8IeLp+643CsQsgPh0ni2z+H+caqv0liQwIDAQABAoIBAHaGjswqijXXf3TT\n"
    "5QE3FVdZixa0F0TCgN+d8lOYj/fLgpEp3hJJOWr+BR3dxriSXp6l2JYD6R+jevNX\n"
    "UqEXzk6Kw/BBPuZQM2ZkFgwVECpsYBSulDIFIJcrfuhhZwNyLUacPkfiOPkhrHhK\n"
    "s7nJEGJRNemmDPZoWWK9RB6Vceg7PdAXNHpUm9ZaMvzuuwskHkmMWrsd2IuyAY2x\n"
    "d36q1YJ1V4i29Gkkv+2MWU//dYcsjqyr6jhnyULzqM4doXf6DpAVjxcWzx/XMMzU\n"
    "ai4JiGjSMR7PiWB/AtEU4VM7GBhrLUnBM8bRowsuOMPdfPATVF4OtDykNIBbGTFF\n"
    "sVYvr6kCgYEA0I40p/QdskxmVLQQYWwTigcUunDAohjr/HXqINTaamCS3AUBVdwu\n"
    "Z6Gr2mYKO2z1yDfWvsFgy8Crfnyk3pSjxLunjpZn/3fIdMQoxTeLnBAXbrVWAmoc\n"
    "xW424wwpkKRT7qj0L3LKdEnBMSSpWP9wDUnpM1fn7HHo8DFBC/UyXU8CgYEAw5N6\n"
    "/uiE+l2YyRazM++baVqn77oCANYPvut+LKxs/bqvgKlyxMZ8AfWwbpGUq5wlA6ib\n"
    "lx6r2L4Jx0f0CSk7hknwfSfbsKhckq88iKs9ggs2e1OWzRUusQvAStxiv2M8aB9E\n"
    "G4jdErWxnaDSNv4agYHJ9wljwJtx69gMtV/aNs0CgYEAvaf0fp/iuZf8nx64nr+3\n"
    "7RePZBTRORfM0uMwLPckQQTdyLPMiRYYJSnCrHOK7ouh35fX89TLf78QtZAIJlmp\n"
    "rGiycVqZ7JozcuxH30Ep9pwzkvvY4Y056NjXlRYkXmLx6OFAXj3XmnTP+S7LyiFQ\n"
    "9uS163kPcdgM6xD/hC5QxMUCgYEAqCLkPL19hRhuP4KKcX3up/ZOJiRNkJZ3VvVx\n"
    "tcpOsRuLwhrrFgxlk/G6ynPR0m8cyzZq/NJbfqxyD6bmP/H4wIxUeeSIVCmJ3HlW\n"
    "m1BMQr6NCh1kqc8qIv8tQ66QHmWcCw/GJ73UAT+/APq/fpOaCfigvwaNgYqht9Y3\n"
    "pr5PBYkCgYEAqR28voHZASUqVxJx0XqU1Z9OFq5x3flTz7lsSW7FHNj+YqEAYDhN\n"
    "K1B656i0+UTfioWHVS9Pu+8WxJ2g6lBSqqiBSWi0LkrXZkymauOPGOQx/2CQF6Ua\n"
    "45Rk1uNSn7dohffJJ2nQIZw+gefn4Dyonz0VyyzHw5Zmmd0+hK/ivSQ=\n"
    "-----END RSA PRIVATE KEY-----\n";
*/
#endif /* _MQTT_CERTIFICATE_H_ */
